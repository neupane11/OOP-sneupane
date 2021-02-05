import unittest

from snake import Snake

class Snaketest(unittest.TestCase):
    def testpython(self):
        size:int=45
        color:str='black'
        danger:bool=True
        python : Snake=Snake(size,color,danger)
        self.assertEqual(python.size,45)
        self.assertEqual(python.color,'black')
        self.assertEqual(python.danger,True)
        python.isDanger()

if __name__ == '__main__':
    unittest.main()