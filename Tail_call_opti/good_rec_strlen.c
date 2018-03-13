/* Tail recursion possible.
** Last instr. is the recursive call
** (after the two incrementations).
*/
int rec_strlen(char const * str, int const counter)
{
  if (*str == '\0')
    return (counter);
  return (rec_strlen(str+1, counter+1));
}