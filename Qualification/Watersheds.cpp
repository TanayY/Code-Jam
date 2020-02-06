

#include <iostream>

using namespace std;

int main()
{
    int T; // Number of Test-Cases
    int H,W; // Height and Width of 2D Array
    int arr[100][10][10];
    char Drainage_Basin[10][10];
    cin>>T;
    
    for(int i=0; i<T; i++) // Loop for number of Test-Cases
    {
        cin>>H>>W;
        for(int j=0; j<H; j++) // Loop for Height
        {
            for(int k=0; k<W; k++) // Loop for Width
            {
                cin>>arr[i][j][k]; // Getting array input
            }
        }
    }
    
    //Tasks :
    // 1) Travel Each Cell
    // 2) Decide the Drainage Basin of the cell according to its neighors
    // 
    // Rules for Deciding the Drainage Basin :
    //  a) Water flows to at most one of its neighboring cells
    //  b) If the neighbors have a higher altitude then water does not flow and that cell is called a sink.
    //  c) Otherwise Water flows from current cell to water with lower altitude
    //  d) If tie. water chooses direction according to this list :
    //          1. North
    //          2. West
    //          3. East
    //          4. South
    
    
    // Testing array output :
    
  /*  for(int j=0; j<H; j++)
    {
        for(int k=0; k<W; k++)
        {
            cout<<arr[j][k]<<"\t";
        }
        cout<<endl;
    }*/
    
    
    // First Traverse :
    for(int i=0; i<T; i++) // Traversing all Test Cases
    {
        for(int j=0; j<H; j++) // Traversing the Height
        {
            for(int k=0; k<W; k++) // Traversing the Width
            {
                int val = arr[i][j][k];
                if(j==0 && k==0)
                {
                    int min;
                    // Available Directions are :
                    // South 
                    // East
                    
                    // Check South
                  /*  if(arr[i][j][k]>arr[i][j][k+1])
                    {
                        min = arr[i][j][k+1];
                    }
                    
                    if(arr[i][j][k]>arr[i][j+1][k] && min>arr[i][j+1][k])
                    {
                        min = arr[i][j+1][k];
                    }*/
                    
                    // No checking needed :
                    //North-West Corner, therefore, Drainage Basin is 'a'.
                    
                    Drainage_Basin[j][k]=='a';
                    
                }
                else if(j==0 && k==W-1)
                {
                    // Available Directions are :
                    // North
                    // East
                    
                }
                else if(j==H-1 && k==0)
                {
                    // Available Directions are :
                    // West
                    // South
                }
                else if(j==H-1 && k==W-1)
                {
                    // Available Directions are :
                    // West
                    // North
                }
                else if( (j>0 && j<H-1) && (k>0 && k<W-1) )
                {
                    // All Directions are Available
                    
                }
            }
        }
    }
    
    

    return 0;
}
