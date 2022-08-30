## ## "How I program in C" talk by Eskil Steenberg @eskilsteenberg

https://youtu.be/443UNeGrFoM



### Todo

-[] Summarise everything up to here https://youtu.be/443UNeGrFoM?t=2325

-[] Summarise everything after here https://youtu.be/443UNeGrFoM?t=6146



### Object Orientation

https://youtu.be/443UNeGrFoM?t=2322

#### Testify Library

[Testify (gamepipeline.org)](http://www.gamepipeline.org/testify.html)

Testify is a library for serialising [data](http://www.gamepipeline.org/HxA_Layers_are_arrays_of_data_used_t.html#data) in to bit streams, and then unpacking them. Data can be packed/unpacked form memory, a network connection or a file. Testify packs all [data](http://www.gamepipeline.org/HxA_Layers_are_arrays_of_data_used_t.html#data) in big endian order and hides any difference between big or small endianness of the CPU. While Testify is written to be very fast it also has extensive debugging capabilities. By enabling the debug state of a Stream Testify can be made to pack significant amounts of meta [data](http://www.gamepipeline.org/HxA_Layers_are_arrays_of_data_used_t.html#data) around each entry. By doing this the receiving end can match the incoming [data](http://www.gamepipeline.org/HxA_Layers_are_arrays_of_data_used_t.html#data) with the expected [data](http://www.gamepipeline.org/HxA_Layers_are_arrays_of_data_used_t.html#data) making it trivial to find pack/unpack miss-match bugs. By building Testify without the define [TESTIFY_DEBUG](http://www.gamepipeline.org/testify_Testify_.html#TESTIFY_DEBUG) all debugging code can be disabled and maximum performance can be obtained.

### Macros

https://youtu.be/443UNeGrFoM?t=2658

Only macro's he uses is `_File_ // String with file name` and `_Line_ // int with line number`

Uses them in his **memory debugger and code debugger** (Excellent tools) which is include in Forge:

#### Forge Library

[Forge (gamepipeline.org)](http://www.gamepipeline.org/forge.html)

Forge is a basic utility library, consisting of pure c functions that are useful in any development. Forge is meant to be included in to all c files and all other Quel Solaar libraries and applications. Because it is included in all files it can provide some very useful functionality such as debugging memory and help find memory leaks. Forge is designed to be lightweight and completely platform and dependency independent.

### Memory

https://youtu.be/443UNeGrFoM?t=3423

 Other languages try to hide how memory work but a fundamental understanding helps even if you don't program in C

#### How to think about memory and pointers

- If some thing exists,  it exists somewhere!

  - It can be described as **what** it is and **where** it is

- memory is really just one very big array of bytes

- a pointer is really just an integer number referencing a byte

- why do pointers have types ?

  ``` c
  void *p; // p is an untype pointer
  
  short *short_pointer;
  int *int_pointer;
  
  short_pointer = p; // both of these point to the same memory location
  int_pointer = p;
  
  a = *short_pointer; // reads 2 bytes as a short
  b = *int_pointer; // reads 4 bytes as an int
  
  // if you have the address you also have the address of it's neighbour
  
  short_pointer++; // adds 2 bytes = sizeof(short)
  int_pointer++; // adds 4 bytes = sizeof(int)
  
  if(short_pointer != int_pointer)
      printf("not the same!")
      
  /* sizeof is not a function! */
      
  double *a;
      
  a = malloc(sizeof(float)); /* how most people write it and can make type errors*/
  a = malloc(sizeof *a)) /* better as if the "a" changes type the code doesn't break */
      
  // pointers and arrays are the same thing
      
  a = x[3];
  
  /* is equivalent to: */
  
  unit8 *p; // bytes
  p = x;
  x = p + (sizeof *x) * 3;
  a = *x;
  
  // Using pointers as counters
  
  uint i;
  for(i = 0; i < 40; i++)
      p[i] = 0;
  
  /* is equivalent to: */
  
  void *end;
  for(end = &p[10]; p != end; p++)
      *p = 0;
  ```

  A pointer is just pointing to memory and memory doesn't know what type it is but it's very helpful to know what type it is.

  If you don't know what type it is it's hard to read the data which is why typed pointers are very important.

  A pointer is like the starting point and you can go forward and backwards (see code above)

  #### Structs

  https://youtu.be/443UNeGrFoM?t=4161

  ```c
  // Structs are just a sizeof and a bunch of offset types
  
  typdef struct{
      uint type;
      char name[32];
      float size
  }MyStructType;
  
  offset = (uint(&((MyStructType *)NULL)->size);
            
  
  ```

  

  #### Memory in Hardware

  https://youtu.be/443UNeGrFoM?t=4977

  ``` c
  // 4k blocks
  
  // |--------|--------|--------|--------|
  // -Each block has read/write/execute flags
  // -Block addresses are virtualised
  // -First Clue that realloc() is awesome (it can rearrange the blocks)
  // -Crashes only happen when you step outside of a block that isn't yours
  // windows users can download gflags.exe
  
  /*
  Rough idea of memory latency (hardware dependent)
  - register 0 cycles
  - level one cache 2-3 cycles
  - level two cache 10 - 15 cycles
  - main memory 50 cycles
  
  This has gotten worse over the last 30 years, and trend is likely to continue
  */
  
  // Memory coherence is No 1 optimisation
  
  typedef struct{
      void *data;
      void *next;
  }LinkedList;
  
  // not memory coherent
  for(l = list; l !=NULL; 1->next)
      do_something(l);
  
  // memory coherent
  for(i = 0; i < array_length; i++)
      do_something(%array[i]);
  
  // Realloc rarely when adding
  if(array_length == array_allocated)
  {
      array_allocated += 16;
      array = realloc(array, (sizeof *array) * array_allocated);
  }
  array[array_length] = value;
      array_length++;
  
  // remove
  array[i] = array[--array_length];
  
  // backwards remove is faster than linked lists
  for(i = array_length; i != 0;)
  {
      i--;
      if(array[i] == the_one_we_want_to_remove)
          break;
      last = save;
      save = array[i];
      array[i] = last;
  }
  
  
  
  
  
  ```

  

  

  

