OpenGL ES 3.0 Programming Guide
===============================

This repository contains the sample code for the OpenGL ES 3.0 Programming Guide by Addison-Wesley Professional (http://www.opengles-book.com). 

## Platforms ##
The sample code for the OpenGL ES 3.0 Programming Guide currently builds on the following platforms:

* Microsoft Windows 
* Linux X11
* Android 4.3+ NDK (C/C++)
* Android 4.3+ SDK (Java)
* iOS7

Instructions for building for each platform are provided in Chapter 16, "OpenGL ES Platforms".

## Authors ##
Dan Ginsburg<br/>
Budirijanto Purnomo<br/>
Previous contributions: Dave Shreiner, Aaftab Munshi

## Reader Contributions ##
We would like to thank the following people for their contributions to the source code:
* Javed Rabbani Shah for contributing the Android SDK port as well as helping with the NDK port
* Jarkko Vatjus-Anttila for contributing the original Linux/X11 port for the OpenGL ES 2.0 Programming Guide
* Eduardo Pelegri-Llopart and Darryl Gough for contributing the Blackberry Native SDK port for the OpenGL ES 2.0 Programming Guide (we have not yet ported the ES 3.0 book to a Blackberry platform)

##Important##
When using, just import "esutil.hpp"

A class: ESEvent is added, and two new callback functions: onAppCmd and onInputEvent are added in ESContext, and two new members: app (type is android_ App *) and userDataArray (type is void * *)

The file is in directory Include

I don't know how to use it. I don't know why they upload to here
