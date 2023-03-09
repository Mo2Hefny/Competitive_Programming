#include <string>

std::string format_duration(int seconds)
{
  if (seconds == 0)
    return "now";
  std::string duration[]{" year", " day", " hour", " minute", " second"};
  bool first = true;
  int y = seconds / 31536000;
  int d = (seconds - 31536000 * y) / 86400;
  int h = (seconds - 31536000 * y - 86400 * d) / 3600;
  int m = (seconds - 31536000 * y - 86400 * d - 3600 * h) / 60;
  int s = (seconds - 31536000 * y - 86400 * d - 3600 * h - 60 * m);
  int num[]{y, d, h, m, s};
  std::string result;
  int last = 0;
  for (last = 4; last > 0; last--)
  {
    if (num[last])
      break;
  }
  for (int i = 0; i < 5; i++)
  {
    if (num[i] > 0)
    {
      if (!first)
      {
        if (i == last)
          result += " and ";
        else
          result += ", ";
      }
      result += std::to_string(num[i]);
      result += duration[i];
      if (num[i] > 1)
        result += 's';
      first = false;
    }
  }
  return result;
}