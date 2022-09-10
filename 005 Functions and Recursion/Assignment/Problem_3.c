/* Solution to Problem: 3 | Display boxes of cookies
 *
 * A box of cookies can hold 24 cookies, and a container can hold 75 boxes of cookies.
 * Write a program that prompts the user to enter the total number of cookies, the number of
 * cookies in a box, and the number of cookie boxes in a container.
 * The program then outputs the number of boxes and the number of containers to ship the cookies.
 * Note that each box must contain the specified number of cookies, and each container
 * must contain the specified number of boxes.
 * If the last box of cookies contains less than the number of specified cookies,
 * you can discard it and output the number of leftover cookies.
 * Similarly, if the last container contains less than the number of specified boxes,
 * you can discard it and output the number of leftover boxes
 * (and the number of leftover cookies in the last box).

    Author: Paul Watts
    Date:   10th September 2022
*/

#include <stdio.h>

int main(void)
{
    int cookies = 0; // The number of cookies
    int cookiesPerBox = 0; // The number of cookies per box
    int boxesPerContainer = 0; // The number of boxes per container
    int boxes = 0; // The number of boxes
    int containers = 0; // The number of containers
    int leftoverCookies = 0; // The number of leftover cookies
    int leftoverBoxes = 0; // The number of leftover boxes

    printf("Please enter the number of cookies: ");
    scanf("%d", &cookies);

    printf("Please enter the number of cookies per box: ");
    scanf("%d", &cookiesPerBox);

    printf("Please enter the number of boxes per container: ");
    scanf("%d", &boxesPerContainer);

    boxes = cookies / cookiesPerBox;
    containers = boxes / boxesPerContainer;
    leftoverCookies = cookies % cookiesPerBox;
    leftoverBoxes = boxes % boxesPerContainer;

    printf("The number of boxes is %d and the number of containers is %d\n", boxes, containers);
    printf("The number of leftover cookies is %d and the number of leftover boxes is %d\n", leftoverCookies, leftoverBoxes);

    return 0;
}
