# TestWinUIApp

A small application showing how to consume a C++ WinRT component from a C# application. Now with an added Windows App SDK reference.

The Windows App SDK NuGet reference is required in the projection project to resolve the Windows App SDK dependencies from the component. The component is registered in the AppxManifest.xml file via the executable project's Package.appxmanifest file.