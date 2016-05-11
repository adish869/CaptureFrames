

This files Include small demo opencv projec to test parallel execution using Incredibuild.
OpenCV when written in optimized C/C++, the library can take advantage of multi-core processing – and by that should be supported by Incredibuild to accelerate process execution.
So I have just created a small test program that capture a single frame of video file and saved it as a picture file to mimic the scenario of process each frame.
I’ve tested this program using Incredibuild  running many tasks in parallel using 2 hosts:  Local (Adi-pc ? 4 cores) and remote  (Vm-w8-support ? 4 cores).
The results are : the program was executed in parallel processing each frame of the video in a separate host.



Folder CaptureFrames_source - include CaptureFrames.vcxproj and CaptureFrames.cpp (was build for Release|X64 )

Folder opencv - Include opencv (version 3.1) for windows (can also be download from - http://sourceforge.net/projects/opencvlibrary/files/opencv-win/3.1.0/opencv-3.1.0.exe/download)

Folder Incredibuild_Execution_pics - Includes Jpeg files that shows the results of Incredibuild execution in parallel.

Myvideo.avi - sample video file

RunMe.Bat - Running using Incredibuild

CaptureFrames.exe - The test program 


Thanks