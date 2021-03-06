
/**
 * @file      UserVector.cpp
 * @author    vmf0min (vlifom@yandex.ru)
 * @brief     User class of vector
 * @version   0.1
 * @date      20-05-2021
 * @copyright Copyright (c) 2021
 */

#include "UserVector.h"

UserVector::UserVector(size_t size) : size_{size}, vector_{new int32_t[size_]} {
  if (vector_ == nullptr) return;
  for (size_t i{}; i < size_; ++i) vector_[i] = 0;
}

UserVector::UserVector(const UserVector& other)
    : size_{other.size_}, vector_{new int32_t[size_]} {
  if (vector_ == nullptr) return;
  for (size_t i{}; i < size_; ++i) vector_[i] = other[i];
}

UserVector::UserVector(UserVector&& other)
    : size_{other.size_}, vector_{new int32_t[size_]} {
  if (vector_ == nullptr) return;
  vector_ = other.vector_;
  other.vector_ = nullptr;
}

UserVector& UserVector::operator=(const UserVector& other) {
  if (this == &other) return *this;
  int32_t* tmp{new int32_t[other.size_]};

  for (size_t i{}; i < other.size_; ++i) tmp[i] = other[i];
  delete[] vector_;
  size_ = other.size_;
  vector_ = tmp;
  return *this;
}

UserVector& UserVector::operator=(const UserVector&& other) {
  if (this == &other) return *this;

  delete[] vector_;
  vector_ = other.vector_;
  size_ = other.size_;
  return *this;
}

std::istream& operator>>(std::istream& in, UserVector& userVector) {
  for (size_t i{}; i < userVector.size(); ++i) in >> userVector[i];
  return in;
}

std::ostream& operator<<(std::ostream& out, const UserVector& userVector) {
  for (size_t i{}; i < userVector.size(); ++i) out << userVector[i] << " ";
  return out;
}