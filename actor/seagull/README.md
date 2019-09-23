```C
/**
 * seagull.c
 *
 * A simple seagull actor that flies in circles/ellipses.
 *
 * by Dr.Disco <z64.me>
 *
 * variable structure (hex)
 * xyzz
 * x = elliptical factor (0x0 = circle,  0xF = really skinny ellipse)
 * y = speed-1           (0x0 = slowest, 0xF = fastest)
 * z = ((radius/64)-1)|(direction<<7) (max value is 0x7F, rolls over to minimum starting at 0x80)
 * z & 0x80 = direction (whether z is >= 0x80 controls clockwisedness)
 *
 * variable structure (binary)
 * xxxx yyyy w zzzzzzz
 * x = elliptical factor (0 = circle,  15 = really skinny ellipse)
 * y = speed-1           (0 = slowest, 15 = fastest)
 * w = clockwisedness
 * z = (radius/64)-1
 **/
```

YouTube video

[![seagull.c](http://img.youtube.com/vi/8laOFLsuNHs/0.jpg)](http://www.youtube.com/watch?v=8laOFLsuNHs)
