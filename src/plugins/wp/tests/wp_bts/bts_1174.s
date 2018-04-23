(* Generated by Frama-C WP *)

Goal store_job_assert_qed_ok.
Hint job,property,qed_ok.
Proof.
  intros.
  Require Import Fourier.
  unfold r_1.
  fourier.
Qed.

Goal store_main_assert_qed_ok.
Hint main,property,qed_ok.
Proof.
  intros.
  Require Import Fourier.
  unfold r_1.
  fourier.
Qed.

Goal store_main_pre.
Hint default,main,property.
Proof.
  intros.
  Require Import Fourier.
  unfold r_1.
  fourier.
Qed.

Goal typed_job_assert_qed_ok.
Hint job,property,qed_ok.
Proof.
  intros.
  Require Import Fourier.
  unfold r_1.
  fourier.
Qed.

Goal typed_real_job_assert_qed_ok.
Hint job,property,qed_ok.
Proof.
  intros.
  Require Import Fourier.
  unfold r_1.
  fourier.
Qed.


