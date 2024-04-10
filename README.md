# CS8395_FinalProject

Project Title: Enhanced Mixed Reality Application for Operating Room Communication

AR Technology and APIs: Unity, Vuforia, Mixed Reality Toolkit, Azure Spatial Anchors

Project Description:
The operating room is a complex environment where clear communication and collaboration are crucial for the success and safety of surgical procedures. Traditional communication methods, primarily verbal, are often prone to misunderstandings and can lack the precision needed in such a high-stakes setting. To address this challenge, this study proposes an innovative mixed reality (MR) application that leverages the Microsoft HoloLens 2 headsets to enhance communication and collaboration among surgical teams.

The project aims to create a MR application that allows expert surgeons to share their gaze with novices, thereby facilitating more effective communication and guidance during operations. This gaze-sharing feature enables experts to highlight specific regions of interest, reducing the need for extensive verbal explanations and increasing the accuracy of communication. Previous works show that gaze guidance can be used as a training tool, and this project aims to use those capabilities. 

The system will use the collaborative features of Mixed Reality Toolkit (MRTK). Azure Spatial Anchor objects will be used to create a shared coordinate system between users, and object coordinates will be relative to this system. Therefore, objects, including the gaze markers created as an objects following the user gaze, will appear at same real-world coordinates. Using the sharing features of MRTK and Azure Spatial Anchors, any change in objects (position, rotation, size etc.) will be reflected to the other users.

Building on this foundation, if time permits, the study will explore additional features to further enhance the application's utility in the operating room. One such feature is marker sharing based on hand position, which will allow surgeons to mark critical points in the surgical field and share these markers with their team in real-time. This will provide a visual reference that can complement gaze sharing and improve spatial awareness for all team members.

Another key feature that can be explored is joint object manipulation, enabling multiple users to interact with virtual objects simultaneously. This feature will facilitate collaborative planning and decision-making, allowing surgical teams to visualize and manipulate 3D models of anatomy or surgical instruments together.

This study aims to create an immersive and interactive MR environment that enhances communication, collaboration, and precision in the operating room. Ultimately, this technology has the potential to transform surgical practices, improve training outcomes, and contribute to safer and more efficient surgeries. Testing and validation of the system will be done using the two Hololens 2 systems MAPLE Lab owns. 


**MVD Update:**
![](https://github.com/acarayberk/CS8395_FinalProject/assets/106617053/af5ed538-d56c-4109-abe7-c0d43eca06d1)


