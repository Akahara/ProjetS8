## Installing (Visual Studio)

First, clone the repository.

Open Visual Studio, click on "continue without code". In `File` > `New` > `Project From Existing Code`,
the "type of project" is "Visual C++", set the "Project file location" to the repository directory, set the "Project name" to the directory's name and click Finish.

In your solution explorer, select your project and click "Show All Files", the icon to the left of "Properties".

Download [boost](https://www.boost.org/users/history/version_1_81_0.html), place it in `C:\Program Files\boost\boot_yourversion`.
In VS enter your project's properties, under `VC++ Directories`, set `External Include Directories` to `C:\Program Files\boost\boost_yourversion;$(ExternalIncludePath)`.
Be sure to be editing all configurations and all platforms!
