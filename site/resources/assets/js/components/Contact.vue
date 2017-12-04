<template>
    <div class="container">
        <main role="main" style="padding-top:40px;" >
                <div class="row">
                    <div class="col-md-12" style="padding-bottom:100px;">
                        <div class="jumbotron about" style="opacity:0.8;background-color:#22264b;border: solid 1px  #a39c87;">
                        <form method="POST" action="http://eesportfolio.ca/contact-information" accept-charset="UTF-8"><input name="_token" type="hidden" value="HFZDTtSXW1DQmpAM0W84ppcGzeEv9OKl6W6vKLus">
                            <h1 id="contact_form_header" class="text-center">Contact me today!</h1>
                            <hr>     
                          <div class="form-group " style="margin-top: 20px;">
                          <i class="fa fa-user"></i>  <label for="Name:">  Full Name:</label>
                            <input v-validate="'required'" data-vv-as="Full name" class="form-control" placeholder="Enter Name" name="name" type="text">
                            <span class="text-danger" v-show="errors.has('name')">{{ errors.first('name') }}</span>
                          </div>
                          <div class="form-group ">
                            <i class="fa fa-envelope"></i><label for="Email:">Email:</label>
                            <input v-validate="'required|email'" data-vv-as="Email" class="form-control" placeholder="Enter Email" name="email" type="text">
                            <span class="text-danger" v-show="errors.has('email')">{{ errors.first('email') }}</span>
                          </div>
                            <div class="form-group ">
                            <i class="fa fa-phone"></i><label for="Phone:">Phone:</label>
                            <input v-validate="'required'" data-vv-as="Phone number" class="form-control" placeholder="Enter Phone Number" name="phone" type="text">
                            <span class="text-danger" v-show="errors.has('phone')">{{ errors.first('phone') }}</span>
                          </div>
                            <div class="form-group ">
                            <i class="fa fa-book"></i>
                            <label for="Prefered Contact Method:">Prefered Contact Method:</label>
                            <select v-validate="'required'" data-vv-as="Contact method" class="form-control" name="bestContactMethod">
                                <option disabled selected >Please, choose one option</option>
                                <option value="phone">Phone</option>
                                <option value="email">Email</option>
                                <option value="skype">Skype</option>
                                <option value="skype">In person</option>
                            </select>
                            <span class="text-danger" v-show="errors.has('bestContactMethod')">{{ errors.first('bestContactMethod') }}</span>
                          </div>
                            <div class="form-group ">
                            <i class="fa fa-book"></i><label for="How did you hear about my services?">How Did You Hear About My Services?</label>
                            <input v-validate="'required'" data-vv-as="How did you hear about me" class="form-control" placeholder="e.g. From a friend..." name="howDidYouHeadAboutMe" type="text">
                            <span class="text-danger" v-show="errors.has('howDidYouHeadAboutMe')">{{ errors.first('howDidYouHeadAboutMe') }}</span>
                          </div>   
                          <div class="form-group ">
                            <i class="fa fa-comment"></i><label for="Comments:">Comments:</label>
                            <textarea v-validate="'required'" data-vv-as="Comments" class="form-control" placeholder="Enter Message" name="comments" cols="50" rows="10"></textarea>
                            <span class="text-danger" v-show="errors.has('comments')">{{ errors.first('comments') }}</span>
                          </div>
                          <div class="form-group">
                            <button type="button" class="btn btn-outline-success">Submit</button>
                            <button type="button" class="btn btn-outline-danger"><span class="fa fa-refresh"></span></button>  
                          </div>
                        </form>
                    </div>
                </div>
            </div>
        </main>
    </div>
</template>

