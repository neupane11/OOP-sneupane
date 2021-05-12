
const assert=require('assert')
const chai=require('chai')
const {Car,Model} =require('../car')
const expect=chai.expect
const assertEq=assert.deepStrictEqual

describe('Car',function(){
    describe('#mycar',function(){
        it('car name and model',function(){
            const carname='ford'
            const carmodel='mustang'
            
            let car1=new Model(carname,carmodel)
            assertEq("I have a ford, it is a mustang",car1.mycar())
            
            
        })
    })
    
   
})