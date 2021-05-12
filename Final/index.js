class User {
    constructor(name) {
      this.name = name
    }

    hasAccess() {
      return true
    }
  }

  class NullUser {
    constructor() {
      this.name = 'Guest'
    }

    hasAccess() {
      return false
    }
  }

  //document.getElementById('loginBtn').addEventListener('click', loginClick)

  function loginClick() {
    let name = 'sandip' || 'sam'
    if (name === '') name = null
    loginUser(getUser(name))
  }
  

  // Call this function to render the welcome code on the screen on load
  loginClick();


function getUser(name) {
    if (name == null) {
      return new NullUser()
    } else {
      return new User(name)
    }
  }

  function loginUser(user) {
    //let content = `<p class="text-danger">You must be logged in to view this</p>`
    if (user.hasAccess()) {
      return 'Congrats you are logged in'
    }
    
  }
  module.exports={'User':User,'NullUser':NullUser,'getUser':getUser,
                    'loginUser':loginUser,'loginClick':loginClick}