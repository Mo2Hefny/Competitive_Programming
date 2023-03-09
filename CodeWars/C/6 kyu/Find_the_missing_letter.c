char findMissingLetter(char array[], int arrayLength)
{
  char start = array[0];
  for (int i = 0; i < arrayLength; i++)
  {
    if (array[i] != start)
      return start;
    start++;
  }
  return '\0';
}