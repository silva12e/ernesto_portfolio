<!DOCTYPE html>
<html lang="{{ app()->getLocale() }}">
<head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <meta name="csrf-token" content="{{ csrf_token() }}">
    <title>{{ config('app.name', 'Laravel') }}</title>
    <link href="{{ asset('css/app.css') }}" rel="stylesheet">
    <link href="https://fonts.googleapis.com/css?family=Berkshire+Swash" rel="stylesheet">
    <link href="https://fonts.googleapis.com/css?family=Pacifico" rel="stylesheet">

</head>
<body>
<div id="app">
    <div id="particles-js">
        @include('partials.navbar')
        <div class="main">
            @yield('content')
        </div>
    </div>
</div>
<script src="https://cdnjs.cloudflare.com/ajax/libs/particlesjs/2.1.0/particles.js"></script>
<script src="{{ asset('js/app.js') }}"></script>
</body>
</html>
