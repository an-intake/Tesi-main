//+
SetFactory("OpenCASCADE");
Box(1) = {0, 0, 0, 1, 1, 1};
//+
Box(2) = {0, 0, 1, 1, 1, 0.05};
//+
Physical Volume("wall") = {1};
//+
Physical Volume("heat") = {2};
