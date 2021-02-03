import unittest

from moon import Moon

class MoonTest(unittest.TestCase):
    def testDefaultMoon(self):
        size:int=3
        color:str="blue"
        phase:int=0
        moon:Moon=Moon(Size,color,phase)

        self.assertEqual(moon.phase,phase)
        self.assertEqual(moon.size,size
        self.assertEqual(moon.color,color)
        
