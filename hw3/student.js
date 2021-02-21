class Student{
    constructor(first,last,grade){
        this._first=first
        this._last=last
        this._grade=grade
    }
    fullName(){
        return `${this._first} ${this._last}`
    }
    email(){
        return `${this._first}.${this._last}@email.com`
    }
    isPass(){
        if(this._grade>=2)
            return true
        else
            return false
    }
    get first(){
        return this._first
    }
    get last(){
        return this._last
    }
    get grade(){
        return this._grade
    }
    
}   
module.exports={'Student':Student}