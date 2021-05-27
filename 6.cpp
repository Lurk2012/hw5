/////////////////////////////////////// 
//             Cpp homework 5        //    
//              made by Lurk         //     
//              gedit + gcc          //      
/////////////////////////////////////// 
//namespace hw5 {
void bitinvert_6_ext (int (&a)[10]) {
int i;
  for (i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
  a[i] = a[i] xor 1;
  }
//}
}
