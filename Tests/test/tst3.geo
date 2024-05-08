
Point(1) = {0,0,0,1};
Point(2) = {1,0,0,1};
Point(3) = {1,0.3,0,1};
Point(4) = {0,0.3,0,1};

Line(1) = {1,2};
Line(2) = {2,3};
Line(3) = {3,4};
Line(4) = {4,1};



//+
Curve Loop(1) = {3, 4, 1, 2};
//+
Plane Surface(1) = {1};
//+
Extrude {0, 0, 1} {
  Surface{1}; 
}
//+
Transfinite Curve {6, 12, 3, 11, 20, 8, 16, 1} = 100 Using Progression 1;
//+
Transfinite Curve {4, 2, 9, 7} = 20 Using Progression 1;
//+
Transfinite Surface {26};
//+
Transfinite Surface {25};
//+
Transfinite Surface {1};
//+
Transfinite Surface {17};
//+
Transfinite Surface {13};
//+
Transfinite Surface {21};
//+

