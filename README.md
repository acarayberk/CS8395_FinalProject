# CS8395_FinalProject

Project Title: Enhanced Mixed Reality Application for Operating Room Communication

AR Technology and APIs: Unity, Mixed Reality Toolkit, Azure Spatial Anchors, Photon Unity Network

Project Description:
The operating room is a complex environment where clear communication and collaboration are crucial for the success and safety of surgical procedures. Traditional communication methods, primarily verbal, are often prone to misunderstandings and can lack the precision needed in such a high-stakes setting. To address this challenge, this study proposes an innovative mixed reality (MR) application that leverages the Microsoft HoloLens 2 headsets to enhance communication and collaboration among surgical teams.

The project aims to create a MR application that allows expert surgeons to share their gaze with novices, thereby facilitating more effective communication and guidance during operations. This gaze-sharing feature enables experts to highlight specific regions of interest, reducing the need for extensive verbal explanations and increasing the accuracy of communication. Previous works show that gaze guidance can be used as a training tool, and this project aims to use those capabilities. 

The system will use the collaborative features of Mixed Reality Toolkit (MRTK). Azure Spatial Anchor objects will be used to create a shared coordinate system between users, and object coordinates will be relative to this system. Therefore, objects, including the gaze markers created as an objects following the user gaze, will appear at same real-world coordinates. Using the sharing features of MRTK and Azure Spatial Anchors, any change in objects (position, rotation, size etc.) will be reflected to the other users.

Building on this foundation, if time permits, the study will explore additional features to further enhance the application's utility in the operating room. One such feature is marker sharing based on hand position, which will allow surgeons to mark critical points in the surgical field and share these markers with their team in real-time. This will provide a visual reference that can complement gaze sharing and improve spatial awareness for all team members.

Another key feature that can be explored is joint object manipulation, enabling multiple users to interact with virtual objects simultaneously. This feature will facilitate collaborative planning and decision-making, allowing surgical teams to visualize and manipulate 3D models of anatomy or surgical instruments together.

This study aims to create an immersive and interactive MR environment that enhances communication, collaboration, and precision in the operating room. Ultimately, this technology has the potential to transform surgical practices, improve training outcomes, and contribute to safer and more efficient surgeries. Testing and validation of the system will be done using the two Hololens 2 systems MAPLE Lab owns. 


**MVD Update:**

In the video below, current progress on the application can be seen. I have created a Hololens 2 application that uses Azure Spatial anchors for a coordinate system origin, tracks the eye gaze and shows it as a hologram, and follows the hand movements and display as a marker. 

In current stage, all the holograms (objects and gaze markers) are visible for all users and sharing should not be a problem, but further testing with multiple devices is required. In addition, hand markers are not saved/shared right now which will be added as a feature for the final version. Displaying and manipulating (translation, rotation etc.) of other objects will also be analyzed and tested with two Hololenses. Finally, method for placing the anchor will be changed, since at the current version, it is placed on the coordinate system of first user that starts the app, and this is not a trustworthy solution. For the next steps, I will focus on the tests with multiple Hololenses, manipulation of shared objects and anchor placement. 

https://youtu.be/SF0wN4_E3LU
![](https://github.com/acarayberk/CS8395_FinalProject/assets/106617053/af5ed538-d56c-4109-abe7-c0d43eca06d1)


**Final Version Update:**

General scripts such as the transition between scenes (ChangeScene.cs), tracking the position of QRCode after initialization and moving it to the next scene, initializing anchor object (InitObject.cs), and changing marker colors for different users can be found under "Assets/Script". Additional codes for QR code management can be found under "Assets/QRCode Script". In addition to short scripts written for tasks, packages and frameworks such as Azure Spatial Anchors, QRCode, Photon Unity Network, and Mixed Reality Toolkit (MRTK) are used in this project. To compile, it requires to be built using Unity for Universal Windows Platform and deployed to Hololens 2 using Visual Studio (v2019 recommended). Additional help for deployment can be found on this link: https://learn.microsoft.com/en-us/windows/mixed-reality/develop/unity/build-and-deploy-to-hololens. Build files are not included in the repository due to large file sizes. Once built and deployed, the application can be started from the Hololens 2 menu.

**Final demo video:** https://youtu.be/UT46cr1oxhE

**Write-up:** https://docs.google.com/document/d/1TqhOdFUysvPKT3WHDrXueJNj-inzeL0dRWvvI88mbKA/edit?usp=sharing
