computer-vision
===============

A set of libraries and projects which will be used in all computer vision applications.

[Documentation](http://uwarg.github.io/computer-vision/html/)


System Overview:
<p><img src="http://i.imgur.com/zt84SZQ.jpg" alt="Computer Vision Flowchart" width="400px" height="530px"></p>

Photos to use for testing:
* [2014 Competition](https://drive.google.com/open?id=0BySpWXvmBM4JWGhrZGk5UWNqNm8&authuser=0)
* [2015 Competition](https://drive.google.com/open?id=0B8ozhZojJMQbfkx4WTlOYnJQV3dKcHFxc0F5c1JkU2FHRzRsM2VVU3VzV3JGeUlZQU9iN00&authuser=1)

CONOPS/Rules:
* [2015 CONOPS/Rules](https://drive.google.com/open?id=0BySpWXvmBM4JajdsemZFb0o2Ukk&authuser=0)
* [2016 CONOPS/Rules](https://drive.google.com/open?id=0BySpWXvmBM4JUnhyaGN0NW5OR1k)
* [2017 CONOPS/Rules](https://drive.google.com/file/d/0BySpWXvmBM4JNlFyX18xTUpPOG8/view?usp=sharing)

### Building and Installing

**Build system**: CMake to set up build environment then whatever CMake gives you (depends on platform, make for Linux, etc.)

**Dependencies**: 
    [OpenCV 3.0](http://opencv.org/downloads.html),
    [Boost 1.58](http://www.boost.org/users/download/),
    [DeckLink](http://www.blackmagicdesign.com/support/sdks) _(optional)_,
    [ZBar] (http://zbar.sourceforge.net/download.html) 

####Installation Instructions:
If you intend to use Windows or Mac, you will need to run a Docker image. The Docker image is pre-configured with the appropriate libraries. Please refer to the instructions here: [Docker Installation](http://docs.uwarg.com/computer-vision/)

*For Linux:*

1. Install the dependencies listed above. This may vary based on your system. 
2. Clone the Project
3. Run `./build.sh` to build and compile the project.

Refer to the detailed instructions here: [Linux Installation](http://docs.uwarg.com/computer-vision/Building-the-project-[Linux]/)

####Running the Program
After compiling, an executable will be present in the build directory. To run it type: 

`./warg-cv`

####Testing the Program
After compiling, in the build directory run:

`make test` or `make test ARGS='-V'` for verbose output

####Goal:
To fill this chart with the right values:
[Judges Evaluation Sheet](https://drive.google.com/open?id=0B8ozhZojJMQbWTBWaXBiXzBQcFk)

This evaluation sheet includes spots to fill with latitudes, longitudes, centroids, areas, volumes, and QR code values.

### Licensing
Copyright (c) 2015-2016, Waterloo Aerial Robotics Group (WARG)

All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3. Usage of this code MUST be explicitly referenced to WARG and this code 
   cannot be used in any competition against WARG.
4. Neither the name of the WARG nor the names of its contributors may be used 
   to endorse or promote products derived from this software without specific
   prior written permission.

THIS SOFTWARE IS PROVIDED BY WARG ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL WARG BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
