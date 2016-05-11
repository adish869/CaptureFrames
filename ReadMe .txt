
Whenever using OpenCV in C/C++, the library can take advantage of multi-core processing – and by that property can be supported by Incredibuild to accelerate process execution by distrusting them to remote machine across the network.
IncrediBuild provides you with the ability to seamlessly distribute processes to remote machines across your network, in order to use it properly, 
your execution flow should be able to execute multiple processes in parallel (whether a batch script that does that or an applicaton that spawns multiple processes in parallel) – 
IncrediBuild will then be able to take these processes and execute them remotely.
Please find a small test that contains a batch script that executes multiple processes in parallel where each process is a program that captures a single frame of video file and saves it as an image file.
When I’ve executed this scenario with many processes executed in parallel using 2 hosts:  Local (Adi-pc ? 4 cores) and remote  (Vm-w8-support ? 4 cores) the result was: the processes were executed in parallel utilizing both my local cores and the coes of the remote machine.



Folder CaptureFrames_source - include CaptureFrames.vcxproj and CaptureFrames.cpp (was build for Release|X64 )

Folder opencv - Include opencv (version 3.1) for windows (can also be download from - http://sourceforge.net/projects/opencvlibrary/files/opencv-win/3.1.0/opencv-3.1.0.exe/download)

Folder Incredibuild_Execution_pics - Includes printscreen files of the IncrediBuild monitoring application showing my OpenCV processes being executed in parallel on both machines

Myvideo.avi - sample video file

RunMe.Bat - Running using Incredibuild

CaptureFrames.exe - The test program 


The way of running the program :

 Usage: CaptureFrames.exe <video file> <frame number>
 OR
 Usage: CaptureFrames.exe <video file> --> In order to get the number of frames in the video


The way Running the program using incredibuild :


Run - RunMe.Bat -->  it will run CaptureFrames.bat through IBconsole 

* CaptureFrames.bat  will execute commands.rsp commands 









Thanks