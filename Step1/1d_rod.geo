//+
Point(1) = {0, 0, 0, 1.0};
//+
Point(2) = {0, 1, 0, 1.0};
//+
Point(3) = {1, 1, 0, 1.0};
//+
Point(4) = {1, 0, 0, 1.0};
//+
Point(5) = {1, 0, 20, 1.0};
//+
Point(6) = {0, 0, 20, 1.0};
//+
Point(7) = {0, 1, 20, 1.0};
//+
Point(8) = {1, 1, 20, 1.0};
//+
Line(1) = {2, 1};
//+
Line(2) = {1, 4};
//+
Line(3) = {4, 3};
//+
Line(4) = {3, 2};
//+
Line(5) = {2, 7};
//+
Line(6) = {7, 8};
//+
Line(7) = {8, 3};
//+
Line(8) = {3, 4};
//+
Line(9) = {4, 5};
//+
Line(10) = {5, 8};
//+
Line(11) = {1, 6};
//+
Line(12) = {6, 7};
//+
Line(13) = {5, 6};
//+
Curve Loop(1) = {5, -12, -11, -1};
//+
Plane Surface(1) = {1};
//+
Curve Loop(2) = {5, 6, 7, 4};
//+
Plane Surface(2) = {2};
//+
Curve Loop(3) = {12, 6, -10, 13};
//+
Plane Surface(3) = {3};
//+
Curve Loop(4) = {2, 3, 4, 1};
//+
Plane Surface(4) = {4};
//+
Curve Loop(5) = {9, 10, 7, -3};
//+
Plane Surface(5) = {5};
//+
Curve Loop(6) = {13, -11, 2, 9};
//+
Plane Surface(6) = {6};
//+
Surface Loop(1) = {1, 2, 3, 5, 6, 4};
//+
Volume(1) = {1};
//+
//+
Transfinite Curve {5, 11, 9, 7} = 50 Using Progression 1;
//+
Transfinite Curve {6, 12, 13, 10, 1, 4, 2, 3} = 15 Using Progression 1;
//+
Transfinite Surface {1} = {7, 6, 1, 2};
//+
Transfinite Surface {2} = {7, 2, 3, 8};
//+
Transfinite Surface {5} = {8, 5, 4, 3};
//+
Transfinite Surface {6} = {6, 1, 4, 5};
//+
Transfinite Surface {3} = {6, 7, 8, 5};
//+
Transfinite Surface {4} = {1, 2, 3, 4};
//+
Recombine Surface {1, 2, 5, 3, 6, 4};
//+
Transfinite Volume{1};
