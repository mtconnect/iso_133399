This directory contains a Visual Studio 2010 C# 
solution and project to show how to use the xsd.exe
generate csharp 13399 mapping. 

The example reads the ISO 13399 Part 100 example that has been
translated into Express Part28 (namespace stripped) file ISO13399.xml.

The example shows how to generate XML using the Csharp paradigm. The only
known issue is to embed the attribute "xsi:nil='true'" into an element when
it only has a "ref" attribute. 
