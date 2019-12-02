#include <iostream>
#include <bits/stdc++.h>

double square(std::vector<std::vector<double> >& Mat)
{
    for(int i=0;i<Mat.size();i++)
    {
        for(int j=0;j<Mat.size();j++)
        {
            Mat.at(i).at(j) = Mat.at(i).at(j)*Mat.at(i).at(j);
        }
    }
}

int main()
{
    double t=0;
    std::vector<std::vector<double> > Mat(3);
    for(int i=0;i<3;i++)
        Mat.at(i).resize(3, 0);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%lf", &Mat.at(i).at(j));

        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%lf ", Mat.at(i).at(j));
        }
        printf("\n");
    }
    square(Mat);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%lf ", Mat.at(i).at(j));
        }
        printf("\n");
    }
}