# DomainExpansion_GOJO
A super small terminal based minigame written in C using the standard libraries. 
With inspiration drawn from Gege Akutami's Jujutsu Kaisen.  
Experiments with two different types of crashes, one being a segmentation fault in the program and the other being a more devastating OS based crash via triggering system OOM.

Feel free to tweak any of the code to your liking! This was created as a project for myself while learning C. It took me approximately 8 hours across two days to complete (if you can even call this completed as of v1.2).

-*-*-*-*-*PLEASE NOTE*-*-*-*-*-*-
// YOU CAN DO SERIOUS DAMAGE TO YOUR MACHINE WITH THE EXTREME MODE! \\
// IF YOU USE EXTREME MODE PLEASE DO IT ON A VM OR THROWAWAY MACHINE! \\
// THIS PROGRAM WAS NOT CREATED TO BE MALICIOUS. IT WAS CREATED TO DOCUMENT MY LEARNING EXPERIENCE WITH C! \\
// IT IS ALSO INTENDED TO BE EDUCATIONAL FOR ANYONE WHO IS ALSO LEARNING C OR IS EXPLORING MEMORY MANAGEMENT CONCEPTS. \\
// REMEMBER TO SAVE AND CLOSE ALL OTHER PROGRAMS (AT LEAST IMPORTANT PROGRAMS) BEFORE DOING EXTREME MODE! \\
-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

In the Jujutsu Kaisen anime/manga, Satoru Gojo's domain expansion works by sending an infinite stream of information into the victim's mind all at once.
The real issue isnt that you can't fathom the information, it is that you physically cannot hold an infinite amount of information in a finite space.
That is how Gojo's domain works.
I attempted to capture that mechanic into coding through two methods, a safe method that I actually came up with after my original idea, and an extreme method which was my original idea.
For the safe method I went with a 'safe' crash, a segmentation fault.
A segmentation fault occurs when a program attempts to access a memory address that it is not normally allowed to reach.
See my explanation in the credits for an analogy to help you understand this!

Additionally there is a secret in this game that is semi accurate to JJK lore! You can discover it ingame or by browsing through the code.
If you do find it by browsing through the code, feel free to edit whatever gets returned! See if you can implement something of your own in that section :) !

Another IMPORTANT NOTE: If trying to use Extreme mode, you MUST run the program with elevated privileges (especially important on linux).

Last but not least, have fun breaking this, studying this, playing this, doing anything with this!
