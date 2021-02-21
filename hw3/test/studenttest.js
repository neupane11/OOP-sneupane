
const assert=require('assert')
const chai=require('chai')
const {Student} =require('../student')
const expect=chai.expect
const assertEq=assert.deepStrictEqual

describe('Student',function(){
    describe('#constructor',function(){
        it('student description',function(){
            const first='sandip'
            const last='neupane'
            const grade=3
            const student1=new Student(first,last,grade)
            assertEq(first,student1.first)
            assertEq(last,student1.last)
            assertEq(grade,student1.grade)
        })
    })
    describe('#fullname',function(){
        it('should be sandip neupane',function(){
            const first='sandip'
            const last='neupane'
            const grade=3
            const student1=new Student(first,last,grade)
            assertEq('sandip neupane',student1.fullName())
           
            
        })
    })
    describe('#email',function(){
        it('should be sandip.neupane@email.com',function(){
            const first='sandip'
            const last='neupane'
            const grade=3
            const student1=new Student(first,last,grade)
           
            assertEq('sandip.neupane@email.com',student1.email())
            
            
        })
    })
    describe('#isPass',function(){
        it('should pass',function(){
            const first='sandip'
            const last='neupane'
            const grade=3
            const student1=new Student(first,last,grade)
           
            assertEq(true,student1.isPass())
            
        })
    })
})