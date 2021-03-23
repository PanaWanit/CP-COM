function facRuntime (n) {
  var i;
  for (i = 0 ; i < n ; i++) {
    facRuntime (n - 1);
  }
}
int main()
{
    facRuntime(100);
}
