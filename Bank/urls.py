"""
URL configuration for BankProject project.

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/6.0/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  path('', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  path('', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.urls import include, path
    2. Add a URL to urlpatterns:  path('blog/', include('blog.urls'))
"""

from django.contrib import admin
from django.urls import path,include
from .import views

urlpatterns = [
    path('',views.mainpage,name="mainpage"),
    path("home/",views.home,name="home"),
    path("about_us/",views.about_us,name="about_us"),
    path("sign_up/",views.sign_up,name="sign_up"),
    path("Contact_US/",views.Contact_Us,name="Contact_Us"),
    path("login/",views.login,name="login"),
    path("services/",views.services,name="services"),
    path("Dashboard/",views.Dashboard,name="Dashboard"),
    path("view_balance/",views.view_balance,name="view_balance"),
    path("transactions/",views.transactions,name="transactions"),
    path("service_dashboard/",views.service_dashboard,name="service_dashboard"),
    path("account_details/",views.account_details,name="account_details"),
    path("transaction_history/",views.transaction_history,name="transaction_history"),
    path("logout/",views.logout,name="logout"),
    path('transaction_pdf/', views.transaction_pdf, name='transaction_pdf')
]
