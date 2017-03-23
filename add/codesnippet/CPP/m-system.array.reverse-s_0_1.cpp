using namespace System;
void PrintIndexAndValues( Array^ myArray );
void main()
{
   // Creates and initializes a new Array instance.
   Array^ myArray = Array::CreateInstance( String::typeid, 9 );
   myArray->SetValue( "The", 0 );
   myArray->SetValue( "QUICK", 1 );
   myArray->SetValue( "BROWN", 2 );
   myArray->SetValue( "FOX", 3 );
   myArray->SetValue( "jumped", 4 );
   myArray->SetValue( "over", 5 );
   myArray->SetValue( "the", 6 );
   myArray->SetValue( "lazy", 7 );
   myArray->SetValue( "dog", 8 );

   // Displays the values of the Array.
   Console::WriteLine(  "The Array instance initially contains the following values:" );
   PrintIndexAndValues( myArray );

   // Reverses the sort of the values of the Array.
   Array::Reverse( myArray, 1, 3 );

   // Displays the values of the Array.
   Console::WriteLine(  "After reversing:" );
   PrintIndexAndValues( myArray );
}

void PrintIndexAndValues( Array^ myArray )
{
   for ( int i = myArray->GetLowerBound( 0 ); i <= myArray->GetUpperBound( 0 ); i++ )
      Console::WriteLine(  "\t[{0}]:\t{1}", i, myArray->GetValue( i ) );
}

/* 
 This code produces the following output.
 
 The Array instance initially contains the following values:
     [0]:    The
     [1]:    QUICK
     [2]:    BROWN
     [3]:    FOX
     [4]:    jumped
     [5]:    over
     [6]:    the
     [7]:    lazy
     [8]:    dog
 After reversing:
     [0]:    The
     [1]:    FOX
     [2]:    BROWN
     [3]:    QUICK
     [4]:    jumped
     [5]:    over
     [6]:    the
     [7]:    lazy
     [8]:    dog
 */