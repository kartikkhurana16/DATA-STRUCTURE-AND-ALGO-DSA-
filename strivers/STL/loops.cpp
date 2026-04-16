/*
#include <iostream>
using namespace std;
int main()
{ 
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}


#include <iostream>
using namespace std;
int main()
{ 
    int n=5;
 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}


   #include <iostream>
using namespace std;
int main()
{ 
    int n=5;
 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
    
      #include <iostream>
using namespace std;
int main()
{ 
    int n=5;
 
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

}
    
         #include <iostream>
using namespace std;
int main()
{ 
    int n=5;
 
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }

}

#include <iostream>
using namespace std;
int main()
{ 
    int n=5;
 
    for(int i=1 ;i<=5;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        { 
            cout<<j;
        }
        cout<<endl;
        
    }

}
      #include <iostream>
using namespace std;
int main()
{ 
    int n=5;
 
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i+i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
     
}
    

#include <iostream>
using namespace std;
int main()
{ 
    int n=5;
 
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<=2*n-2*i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
     
}
    

    #include <iostream>
using namespace std;
int main()
{ 
    int n=5;
 
    for(int i=1;i<=n;i++)
    {
        for(int l=1;l<=5-i+1;l++)
        {
            cout<<" ";
        }
        for(int m=1;m<=i+i-1;m++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<=2*5-2*i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
     
}
    

       #include <iostream>
using namespace std;
int main()
{ 
    int n=5;
 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    for(int i=1;i<n;i++)
    {
        for(int l=0;l<n-i;l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
   
     
}

*/

       #include <iostream>
using namespace std;
int main()
{ 
    int n=6;
    int start;

    for(int i=2;i<=n;i++){
        if(i%2==0) 
        {
            start=1;
        }
        else{
            start=0;
        }
        for(int j=1;j<=i-1;j++)
        {
            cout<<start;
            start= 1-start;
        }
        cout<<endl;
        
    }
    
   
     
}