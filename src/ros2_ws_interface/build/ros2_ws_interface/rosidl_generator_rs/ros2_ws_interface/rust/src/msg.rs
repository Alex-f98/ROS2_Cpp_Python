pub mod rmw {
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[link(name = "ros2_ws_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ros2_ws_interface__msg__Student() -> *const std::os::raw::c_void;
}

#[link(name = "ros2_ws_interface__rosidl_generator_c")]
extern "C" {
    fn ros2_ws_interface__msg__Student__init(msg: *mut Student) -> bool;
    fn ros2_ws_interface__msg__Student__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Student>, size: usize) -> bool;
    fn ros2_ws_interface__msg__Student__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Student>);
    fn ros2_ws_interface__msg__Student__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Student>, out_seq: *mut rosidl_runtime_rs::Sequence<Student>) -> bool;
}

// Corresponds to ros2_ws_interface__msg__Student
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Student {
    pub first_name: rosidl_runtime_rs::String,
    pub last_name: rosidl_runtime_rs::String,
    pub age: i64,
}



impl Default for Student {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ros2_ws_interface__msg__Student__init(&mut msg as *mut _) {
        panic!("Call to ros2_ws_interface__msg__Student__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Student {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_ws_interface__msg__Student__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_ws_interface__msg__Student__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_ws_interface__msg__Student__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Student {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Student where Self: Sized {
  const TYPE_NAME: &'static str = "ros2_ws_interface/msg/Student";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ros2_ws_interface__msg__Student() }
  }
}


}  // mod rmw


#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Student {
    pub first_name: std::string::String,
    pub last_name: std::string::String,
    pub age: i64,
}



impl Default for Student {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Student::default())
  }
}

impl rosidl_runtime_rs::Message for Student {
  type RmwMsg = crate::msg::rmw::Student;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        first_name: msg.first_name.as_str().into(),
        last_name: msg.last_name.as_str().into(),
        age: msg.age,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        first_name: msg.first_name.as_str().into(),
        last_name: msg.last_name.as_str().into(),
      age: msg.age,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      first_name: msg.first_name.to_string(),
      last_name: msg.last_name.to_string(),
      age: msg.age,
    }
  }
}


