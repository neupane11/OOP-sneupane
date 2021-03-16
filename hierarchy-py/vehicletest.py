import unittest

from car import Vehicle

class VehicleTest(unittest.TestCase):
    def testVehicle(self):
        typ : str = "car"
        usedfor : str = "passenger"
        vehicle : Vehicle = Vehicle(typ, usedfor)
        self.assertEqual(vehicle.typ,typ)
        self.assertEqual(vehicle.usedfor,usedfor)
        
        
if __name__ == '__main__':
    unittest.main()