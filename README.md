Gaze

==========

***********************************
-Go to this page to read how to get codeblocks setup with the openFramweworks stuff. http://www.openframeworks.cc/setup/codeblocks/

-Download http://www.openframeworks.cc/versions/preRelease_v0.07/of_preRelease_v007_win_cb.zip
-For me, I grabbed the windows github client. So in my documents I have a github folder. In which goes my sourcode folder and next to that is my library folder. I extracted the folder in the previously mentioned zip file and renamed to "of_v0071". Assuming you do the same (and followed the other directions for setting codeblocks up.) you should just be able to hit the ground compiling.

Hopefully I've done a good job getting this setup so that windows codeblocks users will be good to go. Feel free to ask for any clarifications.

======================================

This is the windows/Code::Blocks version of the eye tracking program.

======================================

Take images of an eye+reflections and find on-screen gaze points.

Requires Openframeworks. Developed with of_preRelease_v007_windows_cb.

This is similar to the eyewriter project, but with the goal of no user adjustments being necessary for operation.

I've tried using openCV's latest version, but linking to those library files gives me compilation errors, and when I finally got it to compile I got a runtime error.

======================================