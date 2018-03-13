/* Tail recursion impossible.
** Last instr. isn’t the recursive call.
*/
int rec_strlen(char * str, int counter)
{
  if (*str)
    counter = rec_strlen(str+1, counter+1);
  return (counter);
}