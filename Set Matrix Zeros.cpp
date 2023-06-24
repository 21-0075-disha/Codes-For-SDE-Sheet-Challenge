#include <bits/stdc++.h>

void setmc(int i,vector<vector<int>>&temp)

{

    for(int j=0;j<temp[i].size();j++)

    {

        temp[i][j]=0;

    }

}

void setmr(int j,vector<vector<int>>&temp)

{

    for(int i=0;i<temp.size();i++)

    {

        temp[i][j]=0;

    }

}

void setZeros(vector<vector<int>> &matrix)

{

    vector<vector<int>>temp(matrix.size(),vector<int>(matrix[0].size(),1));

    for(int i=0;i<matrix.size();i++)

    {

        for(int j=0;j<matrix[0].size();j++)

        {

            if(matrix[i][j]==0)

            {

                setmc(i,temp);

                setmr(j,temp);

            }

        }

    }

    for(int i=0;i<matrix.size();i++)

    {

        for(int j=0;j<matrix[0].size();j++)

        {

            if(temp[i][j]==0)

            matrix[i][j]=temp[i][j];

        }

    }

}
