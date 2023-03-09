char *rot13 (char *str_out, const char *str_in)
{
  char arr1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char arr2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
  int i, j;
  for (i = 0; str_in[i]; i++)
  {
    for (j = 0; j < 52; j++)
      if (str_in[i] == arr1[j])
        break;  
    str_out[i] = (j == 52) ? str_in[i] : arr2[j];
  }
  str_out[i] = '\0';
  return str_out;
}