
const assert=require('assert')
const chai=require('chai')

const {User,NullUser,getUser,loginUser} =require('../index')
const expect=chai.expect
const assertEq=assert.deepStrictEqual


describe('User',function(){
    describe('#user',function(){
        it('sandip is a user',function(){
            const name='sandip'
            let user1=new User(name)
            
            assertEq(user1,getUser(name))
            assertEq(true,user1.hasAccess())
        })
    })
})
describe('NullUser',function(){
    describe('#Nulluser',function(){
        it('Guest is not a user',function(){
            const name= null
            let guest=new NullUser(name)
            
            assertEq(guest,getUser(name))
            assertEq(false,guest.hasAccess())
        })
    })
})
describe('User',function(){
    describe('#user',function(){
        it('sandip is a user so he is logged in',function(){
            const name='sandip'
            user=getUser(name)
            
            assertEq('Congrats you are logged in',loginUser(user))
        })
    })
})

