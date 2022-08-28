## Libraries by Eskil Steenberg

 [Quel Solaar Source Code (gamepipeline.org)](https://www.gamepipeline.org/)



Note: This Web site is currently under constructing as i spend an hour each day working through the documentation. More is to come....  

This website is documenting all the libraries developed by Eskil Steenberg under the Quel Solaar banner. All souce code is available under the [Free BSD licence](http://en.wikipedia.org/wiki/BSD_licenses) meaning that you are free to use ut anyway you want as long as you attribute its source.  

All code can be downloaded [HERE](http://www.quelsolaar.com/quel_solaar.zip)  

The libraries here comprise a significant amount of functionality that has been written to be easy to use, light weight, have few dependencies. I'm releasing this software because i hope that it can help other developers to make games and other software. The code Is divided in to a number of libraries and you can include just the once you need in to your project. I will do my best to answer any question you may have on eskil@obsession.se  

[Forge:](https://www.gamepipeline.org/forge.html)

Basic defines for types and constants, Memory debugging, Vector and Matrix math, Sort, Colorspace conversion, random numberg generation and perlin noise, curves and animation.

[Imagine:](https://www.gamepipeline.org/imagine.html)

Platform layer for multi threading, dynamic library loading, directory traversal, and XML based settings storage system.

[Betray:](https://www.gamepipeline.org/betray.html) and [Betray Plugin API:](https://www.gamepipeline.org/betray_plugin_api.html)

Extensive platform layer that lets you open windows, read input and connect to mics and speakers. Betray has an extensive plugin system that makes all applications written for betray support hardware such as 3D Sound Stereoscopics, multi-touch, Colour Correction, Motion sensors, Head mounted displays and more

[Relinquish:](https://www.gamepipeline.org/relinquish.html)

A lightweight convenience wrapper around OpenGL and OpenGL ES (Code written for Relinquish runs on both), with shaders, textures, vertex arrays and FBOs. Relinquish wraps many of newer features of OpenGL so that code will take advantage of them is they are available.

[Testify:](https://www.gamepipeline.org/testify.html)

Library for encoding/decoding binary file or network data, with a extensive debugging and error checking system. Manages little/big endianness

[Seduce:](https://www.gamepipeline.org/seduce.html)

Fully Scalable 3D GUI toolkit with buttons, text rendering and editing, manipulators, [camera](https://www.gamepipeline.org//seduce_View_and_projection_code_.html#camera) controls, popups, sliders, panels, translation and hit-detection. All controllable with Mouse and keyboard, touch or game controller. Seduce is not yet fully Documented.

 [Gather:](https://www.gamepipeline.org/gather.html)

[Assemble json](https://www.gamepipeline.org/assemble_json.html)

[HxA](https://www.gamepipeline.org/HxA.html)

Here is a video of some of the features of the Platform layer Betray:  

<iframe width="560" height="315" src="//www.youtube.com/embed/oMJP6vlsmbE" frameborder="1" allowfullscreen=""></iframe>  

Here is a video showing of the Seduce UI toolkit:  

<iframe width="560" height="315" src="//www.youtube.com/embed/oDulGQnjsDQ" frameborder="1" allowfullscreen=""></iframe>  


Its important to note that the goal of Quel Solaar is to develop [real](https://www.gamepipeline.org//forge_A*_path_finding_.html#real) world software and not middleware. These libraries are about product of development rather the the goal itself. Having said that, all these libraries have been tested in released software, and almost all of them have been broken out of software in order to be reused. Since the development of LOVE wound down in 2012, all this libraries have been refactored rewritten. I consider all libraries here to be very well designed and future looking, and i do not expect major refactoring.  

  

This entire website was generated using the DocGen tool.