import unittest
from student import Student

class studentTest(unittest.TestCase):

    def testfullname(self):
        student1:Student=Student('sandip','neupane',3.2)
        student2:Student=Student('john','doe',3.3)
        self.assertEqual(student1.fullname,'sandip neupane')
        self.assertEqual(student2.fullname,'john doe')

        student1._first='harry'
        
        self.assertEqual(student1.fullname,'harry neupane')
    
    def testemail(self):
        student1:Student=Student('sandip','neupane',3.2)
        student2:Student=Student('john','doe',3.3)
        self.assertEqual(student1.email,'sandip.neupane@email.com')
        self.assertEqual(student2.email,'john.doe@email.com')

    def testgrade(self):
       
        student1:Student=Student('sandip','neupane',2.2)
        student2:Student=Student('john','doe',3.3)
        self.assertEqual(student1.curvegrade(),3.2)
        self.assertEqual(student2.curvegrade(),4.3)

    if __name__=='__main__':
        unittest.main()