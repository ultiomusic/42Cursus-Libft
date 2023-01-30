int ft_isascii(int c)
{
  if (c >= 0 && c <= 127) // eğer c ascii tablosunda karakterler arasında ise 1, değil ise sıfır döndürüyoruz.
    return (1);
  else
    return (0);
}