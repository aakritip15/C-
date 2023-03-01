// #include <iostream>
// using namespace std;

// int divide(int a)
// {
//     return a / 0;
// }

// ----------------------------------------------------------------------------------------------------------------

// int main()
// {

//     int b = 17;

//     cout << divide(b);


//     cout << "rtrh";
// }
// ----------------------------------------------------------------------------------------------------------------
// #include <iostream>
// using namespace std;
 
// int main()
// {
//    int x = -1;
 
//    // Some code
//    cout << "Before try \n";
//    try {
//       cout << "Inside try \n";
//       if (x < 0)
//       {
//          throw x;
//          cout << "After throw (Never executed) \n";
//       }
//    }
//    catch (int x ) {
//       cout << "Exception Caught \n";
//       cout<< x <<endl;
//    }
 
//    cout << "After catch (Will be executed) \n";
//    return 0;
// }
// ----------------------------------------------------------------------------------------------------------------
// #include <iostream>
// using namespace std;

// int main()
// {
// 	try {
// 	throw 10;
// 	}
// 	catch (char *excp) {
// 		cout << "Caught " << excp;
// 	}
// 	catch (...) {
// 		cout << "Default Exception\n";
// 	}
// 	return 0;
// }
// ----------------------------------------------------------------------------------------------------------------
// #include <iostream>
// using namespace std;

// int main()
// {
// 	try {
// 	throw 'a';
// 	}
// 	catch (int x) {
// 		cout << "Caught "; // error
// 	}
// 	return 0;
// }
// ----------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	try {
		try {
			throw 20;
		}
		catch (int n) {
			cout << "Handle Partially ";
			throw; // Re-throwing an exception
		}
	}
	catch (int n) {
		cout << "Handle remaining ";
	}
	return 0;
}
