    Public Shared Sub Main()
        ' Creates a new component.
        Dim myNewImage As New MyImage()
        
        ' Gets the attributes for the component.
        Dim attributes As AttributeCollection = TypeDescriptor.GetAttributes(myNewImage)
        
        ' Prints the name of the editor by retrieving the EditorAttribute
        ' from the AttributeCollection. 
        
        Dim myAttribute As EditorAttribute = CType(attributes(GetType(EditorAttribute)), EditorAttribute)
        Console.WriteLine(("The editor for this class is: " & myAttribute.EditorTypeName))

    End Sub 'Main