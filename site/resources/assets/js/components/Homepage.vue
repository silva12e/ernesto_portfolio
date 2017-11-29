<template>
    <div class="container">
        <vue-particles
        color="#a39c87"
        :particleOpacity="1"
        :particlesNumber="400"
        shapeType="circle"
        :particleSize="4"
        linesColor="#fff"
        :linesWidth="1"
        :lineLinked="false"
        :lineOpacity="0.4"
        :linesDistance="150"
        :moveSpeed="1"
        :hoverEffect="true"
        hoverMode="grab"
        :clickEffect="true"
        clickMode="push">
        </vue-particles>
        <transition name="fade">
            <div class="col-md-12" v-if="show" style="padding-left:80px; padding-top:40px;">
                <h1 style="color:white" class="text-center"> </h1>
            </div>
        </transition>
       <div class="typer-section">
           <vue-typer
              :text='["Welcome","Thank you for coming to my site","Now, Lets build something great together"]'
              :repeat='0'
              :shuffle='false'
              initial-action='typing'
              :pre-type-delay='70'
              :type-delay='70'
              :pre-erase-delay='2000'
              :erase-delay='50'
              erase-style='backspace'
              :erase-on-complete='false'
              caret-animation='blink'
            ></vue-typer>
       </div>
    </div>
</template>

<script>
import { VueTyper } from 'vue-typer'

    export default {

        mounted() 
        {

            this.show = true;
            console.log('Component mounted.')
        },
        data: function() 
        {
        return{
                show:false
            }
        },
        components: {
            VueTyper
        },
     } 
</script>
