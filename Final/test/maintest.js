
const assert=require('assert')
const chai=require('chai')

const {User,NullUser,getUser,loginUser} =require('../index')
const expect=chai.expect
const assertEq=assert.deepStrictEqual


describe('User',function(){
    describe('#user',function(){
        it('sandip is a user so he has access',function(){
            const name='sandip'
            let user1=new User(name)
            
            assertEq(user1.hasAccess(),true)
            assertEq(loginUser(getUser(name)),'Congrats you are logged in')
        })
    })
})
describe('NullUser',function(){
    describe('#Nulluser',function(){
        it('Guest user has no access',function(){
            const name= null
            let guest=new NullUser(name)
            
            assertEq(getUser(name),guest)
            assertEq(guest.hasAccess(),false)
        })
    })
})


