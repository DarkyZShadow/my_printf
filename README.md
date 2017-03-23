# my_printf

### Supported flags
```
✔ %d : Signed decimal integer
✔ %i : Signed decimal integer
✔ %u : Unsigned decimal integer
✔ %o : Unsigned octal
✔ %x : Unsigned hexadecimal integer
✔ %X : Unsigned hexadecimal integer (uppercase)
✔ %c : Character
✔ %s : String of characters
✔ %p : Pointer address
✔ %% : A % followed by another % character will write a single % to the stream.

✘ %f : Decimal floating point, lowercase
✘ %F : Decimal floating point, uppercase
✘ %e : Scientific notation (mantissa/exponent), lowercase
✘ %E : Scientific notation (mantissa/exponent), uppercase
✘ %g : Use the shortest representation: %e or %f
✘ %G : Use the shortest representation: %E or %F
✘ %a : Hexadecimal floating point, lowercase
✘ %A : Hexadecimal floating point, uppercase
✘ %n : Nothing printed. The corresponding argument must be a pointer to a signed int. The number of characters written so far is stored in the pointed location.
```
