
const assert=require('assert')
const chai=require('chai')
const {Car,Model} =require('../car')
const expect=chai.expect
const assertEq=assert.deepStrictEqual

describe('Car',function(){
    describe('#mycar',function(){
        it('car name ',function(){
            const carname='ford'
            
            let car1=new Car(carname)
            assertEq("I have a ford",car1.present())
            
            
        })
    })
})