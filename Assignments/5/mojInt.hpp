#pragma once
#include <iostream>
#include <initializer_list>

class MojNizInt{
  public:
    MojNizInt():size_{0},p_{nullptr}{}
    MojNizInt(const std::initializer_list<int>& l):size_{l.size()},p_{new int[size_]}{
      std::copy(l.begin(),l.end(),p_);
    }
    MojNizInt(const MojNizInt& other):size_(other.size_){
      delete [] p_;
      p_ = new int [size_];
      std::copy(other.p_, other.p_ + size_, p_);
    }
    MojNizInt(MojNizInt&& other):size_(other.size_),p_(other.p_){
      other.size_ = 0;
      other.p_ = nullptr;
    }

    MojNizInt& operator=(const MojNizInt& other){
      delete [] p_;
      size_ = other.size_;
      p_ = new int[size_];
      std::copy(other.p_, other.p_+size_, p_);
      return *this;
    }
    MojNizInt& operator=(MojNizInt&& other){
      delete [] p_;
      size_ = other.size_;
      p_ = other.p_;
      other.size_ = 0;
      other.p_ = nullptr;
      return *this;
    }
    ~MojNizInt(){ delete[] p_;}


    int& operator[](size_t i){ return p_[i]; }
    const int& operator[](size_t i)const{ return p_[i]; }

    int& at(size_t i){
      if( i > size_) throw std::invalid_argument("out of range");
      else return p_[i];
    }
    const int& at(size_t i)const{
      if( i > size_) throw std::invalid_argument("out of range");
      else return p_[i];
    }

    MojNizInt operator*(int n){
      MojNizInt new_object = *this;
      for(int i=0;i<size_; ++i)
        new_object[i] *= n;
      return new_object;
    }
    MojNizInt operator*(int n)const{
      MojNizInt new_object = *this;
      for(int i=0;i<size_; ++i)
        new_object[i] *= n;
      return new_object;
    }
    MojNizInt operator+(const MojNizInt& other){
      MojNizInt new_object = *this;
      for(int i=0;i<size_; ++i)
        new_object[i] = p_[i] + other[i];
      return new_object;
    }
    MojNizInt operator+(const MojNizInt& other)const{
      if(other.size() != size_) throw std::invalid_argument("can't add different sizes");
      MojNizInt new_object = *this;
      for(int i=0;i<size_; ++i)
        new_object[i] = p_[i] + other[i];
      return new_object;
    }

    MojNizInt operator++(int){
      MojNizInt temp = *this;
      for(int i = 0; i<size_; ++i)
        p_[i]++;
      return temp;
    }
    MojNizInt& operator++(){
      for(int i = 0; i<size_; ++i)
        p_[i]++;
      return *this;
    }

    //ne radi
    void push_back(int n){
      auto newp_ = new int[size_+1];
      newp_[size_+1] = n;
      std::copy(p_, p_+size_, newp_);
      delete [] p_;
      p_ = newp_;
      ++size_;
    }



    size_t size(){ return size_;}
    size_t size()const{ return size_;}


  private:
    size_t size_{0};
    int* p_{nullptr};
};

std::ostream& operator<<(std::ostream& out, const MojNizInt& l){
  if(l.size() == 0){
    std::cout << "empty";
    return out;
  }
  for(int i = 0; i<l.size(); ++i)
    out << l[i] << " ";
  return out;
}









