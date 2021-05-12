class Car {
    constructor(brand) {
      this.carname = brand;
    }
    present() {
      return 'I have a ' + this.carname;
    }
  }
  
class Model extends Car {
    constructor(brand, mod) {
      super(brand);
      this.model = mod;
      
    }
    mycar() {
      return this.present() + ', it is a ' + this.model;
    }
    
  }

  
module.exports={'Car':Car,'Model':Model}