<?php

namespace App\Http\Controllers;

use App\Page;
use Illuminate\Http\Request;

class PageController extends Controller
{
    public function getHome()
    {
        return view('pages.homepage');
    }
    public function getAbout()
    {
        return view('pages.about');
    }
    public function getContact()
    {
        return view('pages.contact');
    }
    public function getProjects()
    {
        return view('pages.projects');
    }
}
